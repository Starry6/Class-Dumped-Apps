@interface CPButton : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) <CPControlDelegate> delegate;
@property (nonatomic) CPImageSet imageSet;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)identifier;
- (void)setHandler:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)handler;
- (id)title;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)image;
- (BOOL)isEnabled;
- (void)handlePrimaryAction;
- (void)handlePressesStart;
- (void)handlePressesEnd;
- (id)imageSet;
- (void)setImageSet:;
- (id)initWithImage:handler:;
+ (BOOL)supportsSecureCoding;
@end
