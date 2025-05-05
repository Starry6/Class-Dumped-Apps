@interface GPBFileDescriptor : NSObject
@property (nonatomic) NSString package;
@property (nonatomic) NSString objcPrefix;
@property (nonatomic) C syntax;
- (id)package;
- (void)dealloc;
- (id)initWithPackage:syntax:;
- (id)initWithPackage:objcPrefix:syntax:;
- (unsigned char)syntax;
- (id)objcPrefix;
@end
