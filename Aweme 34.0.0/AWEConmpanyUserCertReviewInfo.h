@interface AWEConmpanyUserCertReviewInfo : MTLModel
@property (nonatomic) NSString forbidUpdateReason;
@property (nonatomic) BOOL canUpdateNow;
@property (nonatomic) Q status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)forbidUpdateReason;
- (void)setForbidUpdateReason:;
- (BOOL)canUpdateNow;
- (void)setCanUpdateNow:;
- (void)setStatus:;
- (void).cxx_destruct;
- (unsigned long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
