@interface GEOTextItemContainer : NSObject
@property (nonatomic) <GEOTextItemDisplayConfig> displayConfig;
@property (nonatomic) NSArray textItems;
- (id)init;
- (void).cxx_destruct;
- (id)displayConfig;
- (id)textItems;
- (id)initWithDisplayConfig:textItems:;
- (id)initWithTextItemContainer:;
@end
