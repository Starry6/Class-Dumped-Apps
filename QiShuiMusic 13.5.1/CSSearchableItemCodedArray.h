@interface CSSearchableItemCodedArray : NSArray
@property (nonatomic) {?=*{?=IC}} obj;
@property (nonatomic) CSDecoder items;
@property (nonatomic) CSDecoder itemsContent;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString protectionClass;
- (id)initWithItems:;
- (id)obj;
- (id)initWithItems:itemsContent:;
- (id)items;
- (void)setProtectionClass:;
- (id)protectionClass;
- (id)itemsContent;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)bundleID;
- (void)setBundleID:;
@end
