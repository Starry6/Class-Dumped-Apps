@interface CSJAdGroupInfo : NSObject
@property (nonatomic) NSString group_id;
@property (nonatomic) NSString group_tag;
@property (nonatomic) NSString card_tag;
- (id)card_tag;
- (id)group_tag;
- (void)setCard_tag:;
- (void)setGroup_id:;
- (void)setGroup_tag:;
- (id)initWithDictionary:error:;
- (BOOL)isMemberOfClass:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)group_id;
@end
