@interface AWEIMGroupImpl.GroupChainsEntryModel : MTLModel
@property (nonatomic) NSString entryId;
@property (nonatomic) NSString entryCreateUid;
@property (nonatomic) NSString entryText;
- (id)entryId;
- (void)setEntryId:;
- (id)entryCreateUid;
- (void)setEntryCreateUid:;
- (id)entryText;
- (void)setEntryText:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
