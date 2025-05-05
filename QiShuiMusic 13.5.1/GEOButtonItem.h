@interface GEOButtonItem : NSObject
@property (nonatomic) NSInteger buttonType;
- (void).cxx_destruct;
- (int)buttonType;
- (id)initWithButtonItem:;
+ (id)buttonItemsFromPDButtonItems:;
@end
