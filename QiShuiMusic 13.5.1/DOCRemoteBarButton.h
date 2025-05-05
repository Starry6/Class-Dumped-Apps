@interface DOCRemoteBarButton : NSObject
@property (nonatomic) UIBarButtonItem barButton;
@property (nonatomic) NSUUID uuid;
- (id)uuid;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithBarButton:;
- (id)barButton;
+ (BOOL)supportsSecureCoding;
@end
