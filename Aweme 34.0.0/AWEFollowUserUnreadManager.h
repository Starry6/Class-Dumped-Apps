@interface AWEFollowUserUnreadManager : NSObject
@property (nonatomic) NSMutableDictionary mappingInsertIDDict;
@property (nonatomic) NSMutableDictionary mappingUnreadDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)unreadCountWithUserID:;
- (id)mappingUnreadDict;
- (id)mappingInsertIDDict;
- (BOOL)hasUnreadAwemeWithUserID:;
- (void)markHasEnterDetail:;
- (void)clearAllUnreadData;
- (void)updateUser:insertID:;
- (id)getInsertIDWithUserID:;
- (void)clearInsertIDsForUser:;
- (void)clearAllInsertIDs;
- (void)setMappingInsertIDDict:;
- (void)setMappingUnreadDict:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
