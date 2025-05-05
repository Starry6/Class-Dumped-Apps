@interface MTLDebugInstrumentationData : NSObject
@property (nonatomic) BOOL hasGlobalConstantsInstrumentationFailures;
@property (nonatomic) BOOL hasArgumentBufferInstrumentationFailures;
@property (nonatomic) BOOL hasArgumentLimitsInstrumentationFailures;
@property (nonatomic) I threadgroupArgumentOffset;
@property (nonatomic) I activeThreadgroupMask;
@property (nonatomic) Q bufferAccessMask;
- (void)dealloc;
- (id)initWithData:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)stringForID:;
- (id)debugLocationForID:;
- (id)debugSubProgramForID:;
- (id)globalConstantsData;
- (id)userReflectionData;
- (BOOL)hasGlobalConstantsInstrumentationFailures;
- (BOOL)hasArgumentBufferInstrumentationFailures;
- (BOOL)hasArgumentLimitsInstrumentationFailures;
- (unsigned int)threadgroupArgumentOffset;
- (unsigned int)activeThreadgroupMask;
- (unsigned long long)bufferAccessMask;
@end
