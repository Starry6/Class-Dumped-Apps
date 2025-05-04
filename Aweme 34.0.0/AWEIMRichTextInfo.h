@interface AWEIMRichTextInfo : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary info;
@property (nonatomic) {_NSRange=QQ} range;
- (id)initWithDic:;
- (id)initWithType:info:range:;
- (id)toJsonContent;
- (id)range;
- (void)setRange:;
- (void)setInfo:;
- (id)info;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
