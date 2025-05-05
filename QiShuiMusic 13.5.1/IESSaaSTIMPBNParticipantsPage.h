@interface IESSaaSTIMPBNParticipantsPage : GPBMessage
@property (nonatomic) NSMutableArray participantsArray;
@property (nonatomic) Q participantsArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
+ (id)descriptor;
@end
