@interface MPMediaAPIParserLayer : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q type;
- (id)key;
- (void)setType:;
- (void)setKey:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (id)layerWithKey:ofType:;
+ (id)layerWithFirstObjectOfType:;
@end
