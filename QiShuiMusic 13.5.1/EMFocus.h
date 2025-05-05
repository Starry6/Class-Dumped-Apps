@interface EMFocus : NSObject
@property (nonatomic) NSSet focusedAccountIdentifiers;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithFocusedAccountIdentifiers:;
- (BOOL)isFocusedIdentifier:;
- (id)focusedAccountIdentifiers;
@end
