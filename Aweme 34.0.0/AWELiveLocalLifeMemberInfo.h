@interface AWELiveLocalLifeMemberInfo : MTLModel
@property (nonatomic) BOOL isMember;
@property (nonatomic) BOOL isMemberExclusive;
@property (nonatomic) NSNumber memberPrice;
@property (nonatomic) BOOL hasMemberPrice;
@property (nonatomic) NSString showPriceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsMember:;
- (BOOL)isMember;
- (BOOL)isMemberExclusive;
- (void)setIsMemberExclusive:;
- (id)memberPrice;
- (void)setMemberPrice:;
- (BOOL)hasMemberPrice;
- (void)setHasMemberPrice:;
- (id)showPriceType;
- (void)setShowPriceType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
