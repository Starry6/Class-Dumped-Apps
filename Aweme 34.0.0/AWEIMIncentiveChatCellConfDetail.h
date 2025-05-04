@interface AWEIMIncentiveChatCellConfDetail : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSURL iconURL;
- (id)dictionaryRawData;
- (id)schema;
- (void)setIconURL:;
- (void)setSchema:;
- (id)subtitle;
- (id)iconURL;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithDictionary:;
@end
