@interface GEOXPCDirectionsReply : GEOXPCReply
@property (nonatomic) GEODirectionsResponse directionsResponse;
@property (nonatomic) GEODirectionsError directionsError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDirectionsResponse:;
- (id)directionsResponse;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)directionsError;
- (void)setDirectionsError:;
@end
