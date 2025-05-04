@interface AWEJsonPatchPathComponent : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q upstreamType;
@property (nonatomic) BOOL isArrayIndex;
@property (nonatomic) BOOL isMutable;
@property (nonatomic) BOOL unWriteBacked;
@property (nonatomic) NSString propName;
@property (nonatomic) NSString component;
@property (nonatomic) @ correspondingObj;
- (void)setIsMutable:;
- (void)setCorrespondingObj:;
- (void)updateType:obj:;
- (unsigned long long)upstreamType;
- (void)setUpstreamType:;
- (BOOL)isArrayIndex;
- (void)setIsArrayIndex:;
- (BOOL)unWriteBacked;
- (void)setUnWriteBacked:;
- (id)correspondingObj;
- (BOOL)isMutable;
- (id)component;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setComponent:;
- (id)propName;
- (void)setPropName:;
@end
