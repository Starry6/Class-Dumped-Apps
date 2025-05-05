@interface SAGenericCommand : SABaseCommand
@property (nonatomic) NSString className;
@property (nonatomic) NSString group;
- (id)className;
- (id)groupIdentifier;
- (id)group;
- (id)encodedClassName;
@end
