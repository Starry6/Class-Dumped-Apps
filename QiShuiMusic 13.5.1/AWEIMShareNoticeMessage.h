@interface AWEIMShareNoticeMessage : AWEIMMessage
@property (nonatomic) NSString awemeID;
@property (nonatomic) IESIMURLModel coverURL;
@property (nonatomic) NSString awemeDetail;
@property (nonatomic) NSString authorName;
- (void)setAwemeDetail:;
- (id)awemeID;
- (id)awemeDetail;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setAwemeID:;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
- (id)coverURL;
- (void)setCoverURL:;
@end
