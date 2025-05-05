@interface SFWatchListButtonItem : SFButtonItem
@property (nonatomic) SFWatchListItem watchListItem;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q uniqueId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)watchListItem;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (void)setWatchListItem:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
