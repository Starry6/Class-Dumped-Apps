@interface YYTextSimpleEmoticonParser : NSObject
@property (nonatomic) NSDictionary emoticonMapper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_replaceTextInRange:withLength:selectedRange:;
- (id)emoticonMapper;
- (BOOL)parseText:selectedRange:;
- (void)setEmoticonMapper:;
- (id)init;
- (void).cxx_destruct;
@end
