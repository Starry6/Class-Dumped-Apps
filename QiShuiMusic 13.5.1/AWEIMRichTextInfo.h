@interface AWEIMRichTextInfo : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary info;
@property (nonatomic) {_NSRange=QQ} range;
- (id)initWithDic:;
- (id)initWithType:info:range:;
- (id)toJsonContent;
- (void)setRange:;
- (void)setInfo:;
- (void)setType:;
- (id)range;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)info;
@end
