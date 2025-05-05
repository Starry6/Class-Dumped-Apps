@interface IESSaaSTIMPBNCreateConversationV2RequestBody : GPBMessage
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) GPBInt64Array participantsArray;
@property (nonatomic) Q participantsArray_Count;
@property (nonatomic) BOOL persistent;
@property (nonatomic) BOOL hasPersistent;
@property (nonatomic) NSString idempotentId;
@property (nonatomic) BOOL hasIdempotentId;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) BOOL hasAvatarURL;
@property (nonatomic) NSString description_p;
@property (nonatomic) BOOL hasDescription_p;
@property (nonatomic) NSMutableDictionary bizExt;
@property (nonatomic) Q bizExt_Count;
+ (id)descriptor;
@end
