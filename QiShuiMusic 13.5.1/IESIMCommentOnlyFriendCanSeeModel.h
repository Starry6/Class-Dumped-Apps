@interface IESIMCommentOnlyFriendCanSeeModel : IESIMBaseApiModel
@property (nonatomic) NSString buttonDesc;
@property (nonatomic) NSString buttonSubDesc;
@property (nonatomic) NSString unsetDesc;
@property (nonatomic) NSString unsetSubDesc;
@property (nonatomic) NSString setDesc;
@property (nonatomic) NSString visitorDesc;
- (id)setDesc;
- (void)setVisitorDesc:;
- (id)buttonDesc;
- (id)buttonSubDesc;
- (void)setButtonDesc:;
- (void)setButtonSubDesc:;
- (void)setSetDesc:;
- (void)setUnsetDesc:;
- (void)setUnsetSubDesc:;
- (id)unsetDesc;
- (id)unsetSubDesc;
- (id)visitorDesc;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
