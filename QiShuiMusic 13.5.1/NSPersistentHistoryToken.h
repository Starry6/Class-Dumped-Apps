@interface NSPersistentHistoryToken : NSObject
- (id)ed_archiveTokenWithError:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)storeTokens;
- (id)copyWithZone:;
+ (id)ed_unarchivedTokenWithData:error:;
+ (BOOL)supportsSecureCoding;
@end
