@interface SALocalSearchActionableMapItem : SALocalSearchMapItem
@property (nonatomic) NSArray commands;
- (id)groupIdentifier;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
+ (id)actionableMapItem;
+ (id)actionableMapItemWithDictionary:context:;
@end
