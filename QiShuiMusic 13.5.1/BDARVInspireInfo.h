@interface BDARVInspireInfo : NSObject
@property (nonatomic) q effectiveInspireTime;
@property (nonatomic) q inspireAdType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)effectiveInspireTime;
- (long long)inspireAdType;
- (void)setEffectiveInspireTime:;
- (void)setInspireAdType:;
- (id)initWithDictionary:error:;
@end
