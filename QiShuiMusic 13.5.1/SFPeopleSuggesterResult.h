@interface SFPeopleSuggesterResult : NSObject
@property (nonatomic) NSString contactID;
@property (nonatomic) I flags;
@property (nonatomic) NSArray handles;
@property (nonatomic) NSString sendersKnownAlias;
- (id)contactID;
- (id)initWithCoder:;
- (void)setSendersKnownAlias:;
- (void)setContactID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)sendersKnownAlias;
- (id)handles;
- (void)setFlags:;
- (unsigned int)flags;
- (void)setHandles:;
+ (BOOL)supportsSecureCoding;
@end
