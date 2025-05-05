@interface CPNowPlayingButton : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) <CPControlDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHandler:;
- (void)setDelegate:;
- (id)identifier;
- (void)setSelected:;
- (void)setHandler:;
- (id)initWithCoder:;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (id)handler;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEnabled;
- (void)handlePrimaryAction;
+ (BOOL)supportsSecureCoding;
@end
