@interface CTCarrierSpacePlanGroupInfo : NSObject
@property (nonatomic) q planCategory;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSArray groupOptionsList;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)groupId;
- (void).cxx_destruct;
- (id)description;
- (void)setGroupId:;
- (BOOL)isEqual:;
- (long long)planCategory;
- (void)setPlanCategory:;
- (id)groupOptionsList;
- (void)setGroupOptionsList:;
+ (BOOL)supportsSecureCoding;
@end
