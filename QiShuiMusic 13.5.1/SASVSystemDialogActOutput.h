@interface SASVSystemDialogActOutput : AceObject
@property (nonatomic) NSArray dialogActs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)dialogActs;
- (void)setDialogActs:;
+ (id)systemDialogActOutput;
+ (id)systemDialogActOutputWithDictionary:context:;
@end
