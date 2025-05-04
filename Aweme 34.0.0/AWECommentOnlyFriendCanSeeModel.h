@interface AWECommentOnlyFriendCanSeeModel : AWEBaseApiModel
@property (nonatomic) NSString buttonDesc;
@property (nonatomic) NSString buttonSubDesc;
@property (nonatomic) NSString unsetDesc;
@property (nonatomic) NSString unsetSubDesc;
@property (nonatomic) NSString setDesc;
@property (nonatomic) NSString visitorDesc;
- (id)buttonDesc;
- (void)setButtonDesc:;
- (id)buttonSubDesc;
- (void)setButtonSubDesc:;
- (id)unsetDesc;
- (void)setUnsetDesc:;
- (id)unsetSubDesc;
- (void)setUnsetSubDesc:;
- (id)setDesc;
- (void)setSetDesc:;
- (id)visitorDesc;
- (void)setVisitorDesc:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
