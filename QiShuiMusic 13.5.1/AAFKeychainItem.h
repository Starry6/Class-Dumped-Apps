@interface AAFKeychainItem : NSObject
@property (nonatomic) NSData value;
@property (nonatomic) AAFKeychainItemDescriptor descriptor;
- (id)descriptor;
- (void)setDescriptor:;
- (id)initWithAttributes:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)itemAttributes;
- (id)initWithDescriptor:value:;
@end
