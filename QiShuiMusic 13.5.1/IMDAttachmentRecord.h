@interface IMDAttachmentRecord : IMDRecord
@property (nonatomic) q rowID;
@property (nonatomic) NSString guid;
@property (nonatomic) NSString path;
@property (nonatomic) NSString transferName;
@property (nonatomic) NSString utiString;
@property (nonatomic) q transferState;
@property (nonatomic) BOOL outgoing;
@property (nonatomic) BOOL sticker;
@property (nonatomic) BOOL commSafetySensitive;
@property (nonatomic) NSDictionary attributionInfo;
@property (nonatomic) IMDMessageRecord messageRecord;
- (id)path;
- (id)init;
- (long long)rowID;
- (unsigned long long)_cfTypeID;
- (id)guid;
- (id)_localCache;
- (BOOL)isOutgoing;
- (BOOL)isSticker;
- (id)attributionInfo;
- (long long)transferState;
- (id)_fetchUpdatedRecord;
- (id)_propertyDescriptorForProperty:;
- (int)_propertyIDForProperty:;
- (id)cfAttachmentRecord;
- (id)transferName;
- (id)utiString;
- (BOOL)isCommSafetySensitive;
- (id)messageRecord;
+ (id)allocWithZone:;
+ (id)keyPathsToColumns;
@end
