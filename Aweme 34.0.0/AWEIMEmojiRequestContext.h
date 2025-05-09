@interface AWEIMEmojiRequestContext : NSObject
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber topK;
@property (nonatomic) NSNumber stickerType;
@property (nonatomic) NSString source;
@property (nonatomic) NSString queryType;
@property (nonatomic) NSString convID;
@property (nonatomic) NSString toUserID;
@property (nonatomic) @? completionBlock;
@property (nonatomic) double timeout;
- (id)toUserID;
- (void)setToUserID:;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setStickerType:;
- (id)convID;
- (void)setConvID:;
- (void)setTopK:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (double)timeout;
- (id)queryType;
- (void)setTimeout:;
- (void).cxx_destruct;
- (id)source;
- (id)title;
- (void)setSource:;
- (void)setTitle:;
- (void)setQueryType:;
- (id)stickerType;
- (id)topK;
@end
