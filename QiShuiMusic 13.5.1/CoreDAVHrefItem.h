@interface CoreDAVHrefItem : CoreDAVLeafItem
@property (nonatomic) NSURL baseURL;
@property (nonatomic) NSInteger writeStyle;
- (void)write:;
- (id)init;
- (id)payloadAsFullURL;
- (id)initWithURL:;
- (void)setBaseURL:;
- (id)baseURL;
- (void)parserSuggestsBaseURL:;
- (void)setWriteStyle:;
- (id)payloadAsOriginalURL;
- (id)initWithURL:baseURL:;
- (void).cxx_destruct;
- (id)description;
- (int)writeStyle;
@end
