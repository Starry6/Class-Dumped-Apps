@interface AWEIMNativeDynamicCardElement : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary content;
@property (nonatomic) BOOL isStream;
- (void)updateTextContent:;
- (id)getContentDict;
- (id)getTextContent;
- (void)setIsStream:;
- (id)content;
- (id)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)copyWithZone:;
- (BOOL)isStream;
@end
