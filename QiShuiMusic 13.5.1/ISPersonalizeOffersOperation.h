@interface ISPersonalizeOffersOperation : ISOperation
@property (nonatomic) ISPersonalizeOffersRequest personalizeOffersReqeust;
@property (nonatomic) SSPersonalizeOffersResponse response;
- (void)dealloc;
- (void)run;
- (id)response;
- (id)initWithPersonalizeOffersRequest:;
- (id)personalizeOffersReqeust;
- (void)_addDictionaryToResponse:;
- (id)_copyResponseForURL:requestString:error:;
- (BOOL)_runWithURLDictionary:error:;
@end
