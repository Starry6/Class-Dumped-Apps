@interface INSystemAppGrouping : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSArray iOS;
@property (nonatomic) NSString macOS;
@property (nonatomic) NSArray watchOS;
- (id)macOS;
- (id)key;
- (id)iOS;
- (id)watchOS;
- (void)setMacOS:;
- (void)setIOS:;
- (void)setKey:;
- (void)setWatchOS:;
- (void).cxx_destruct;
+ (id)groupingForKey:iOS:macOS:watchOS:;
@end
