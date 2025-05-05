@interface IMClassicTapback : IMTapback
- (id)initWithAssociatedMessageType:;
- (id)actionString;
+ (BOOL)isValidRepresentation:;
+ (BOOL)isValidAssociatedMessageType:;
@end
