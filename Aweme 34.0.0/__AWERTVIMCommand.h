@interface __AWERTVIMCommand : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSDate createdAt;
@property (nonatomic) NSDictionary content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIdentifier:type:conversationID:createdAt:content:;
- (id)content;
- (id)identifier;
- (long long)type;
- (id)conversationID;
- (id)description;
- (id)createdAt;
- (void).cxx_destruct;
@end
