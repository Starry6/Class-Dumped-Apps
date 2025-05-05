@interface NSMetadataQueryAttributeValueTuple : NSObject
@property (nonatomic) NSString attribute;
@property (nonatomic) @ value;
@property (nonatomic) Q count;
- (void)dealloc;
- (id)attribute;
- (id)value;
- (unsigned long long)count;
- (id)_init:attribute:value:count:;
@end
