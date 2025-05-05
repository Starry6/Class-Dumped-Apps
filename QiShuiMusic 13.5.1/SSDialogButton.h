@interface SSDialogButton : NSObject
@property (nonatomic) @ actionParameter;
@property (nonatomic) NSString buttonAction;
@property (nonatomic) NSString URLTarget;
@property (nonatomic) NSString buttonTitle;
- (id)init;
- (void)dealloc;
- (id)buttonTitle;
- (id)buttonAction;
- (id)initWithTitle:actionDictionary:;
- (id)actionParameter;
- (id)URLTarget;
- (id)valueForActionProperty:;
+ (id)buttonWithTitle:;
@end
