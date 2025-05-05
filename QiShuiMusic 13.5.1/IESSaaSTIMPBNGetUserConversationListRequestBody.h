@interface IESSaaSTIMPBNGetUserConversationListRequestBody : GPBMessage
@property (nonatomic) NSInteger sortType;
@property (nonatomic) BOOL hasSortType;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) NSInteger conType;
@property (nonatomic) BOOL hasConType;
@property (nonatomic) q limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) NSInteger includeRole;
@property (nonatomic) BOOL hasIncludeRole;
@property (nonatomic) NSInteger excludeRole;
@property (nonatomic) BOOL hasExcludeRole;
@property (nonatomic) BOOL includeRemovedGroup;
@property (nonatomic) BOOL hasIncludeRemovedGroup;
+ (id)descriptor;
@end
