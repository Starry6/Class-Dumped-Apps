@interface TKSEPClientToken : TKClientToken
- (id)initWithTokenID:serverEndpoint:targetUID:;
+ (BOOL)handlesTokenID:;
+ (id)builtinTokenIDs;
@end
