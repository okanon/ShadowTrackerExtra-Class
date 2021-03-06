//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FApplePlatformObject.h"

#import "MTLCommandBuffer-Protocol.h"

@class NSError, NSMutableArray, NSString;
@protocol MTLBuffer, MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface FMetalDebugCommandBuffer : FApplePlatformObject <MTLCommandBuffer>
{
    NSMutableArray *DebugGroup;
    NSString *ActiveEncoder;
    struct TSet<id<MTLResource>, DefaultKeyFuncs<id<MTLResource>, false>, FDefaultSetAllocator> Resources;
    struct TSet<id, DefaultKeyFuncs<id, false>, FDefaultSetAllocator> States;
    struct TArray<FMetalDebugCommand *, FDefaultAllocator> DebugCommands;
    int DebugLevel;
    id <MTLBuffer> DebugInfoBuffer;
    id <MTLCommandBuffer> InnerBuffer;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(readonly) id <MTLCommandBuffer> InnerBuffer; // @synthesize InnerBuffer;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)blit:(id)arg1;
- (void)dispatch:(id)arg1;
- (void)draw:(id)arg1;
- (void)setPipeline:(id)arg1;
- (void)endCommandEncoder;
- (void)beginBlitCommandEncoder:(id)arg1;
- (void)beginComputeCommandEncoder:(id)arg1;
- (void)beginRenderCommandEncoder:(id)arg1 withDescriptor:(id)arg2;
- (void)trackState:(id)arg1;
- (void)trackResource:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)resourceStateCommandEncoder;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)commit;
- (void)enqueue;
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
@property(copy) NSString *label;
@property(readonly) _Bool retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

