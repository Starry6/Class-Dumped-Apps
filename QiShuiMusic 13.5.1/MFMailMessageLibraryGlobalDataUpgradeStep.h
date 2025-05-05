@interface MFMailMessageLibraryGlobalDataUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (int)runWithConnection:;
+ (id)_messagesTableDefinition;
+ (BOOL)_recreateMessagesIndices:;
+ (id)_triggerDefinition;
@end
