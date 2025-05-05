@interface BSObjCBlockArgument : BSObjCArgument
@property (nonatomic) BSObjCArgument returnValue;
@property (nonatomic) NSArray arguments;
- (id)returnValue;
- (id)_prettyTypeString;
- (id)arguments;
- (BOOL)isBlock;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:;
@end
