@interface EDConversationInfo : NSManagedObject
@property (nonatomic) NSString ckRecordID;
@property (nonatomic) NSData ckRecordSystemFields;
@property (nonatomic) NSString conversationUUID;
@property (nonatomic) NSDate lastModified;
@property (nonatomic) NSString messageIds;
@property (nonatomic) BOOL notifyMe;
@property (nonatomic) BOOL muted;
+ (id)fetchRequest;
@end
