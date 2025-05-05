@interface CNActionItem : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL disabled;
- (void)setDisabled:;
- (void)setTitle:;
- (BOOL)disabled;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)image;
- (id)initWithImage:type:;
@end
