@interface AAMobileMeOfferResponse : AAResponse
@property (nonatomic) NSNumber identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) NSString classicTitle;
@property (nonatomic) NSString classicMessage;
- (id)identifier;
- (id)title;
- (id)message;
- (id)classicTitle;
- (id)classicMessage;
@end
