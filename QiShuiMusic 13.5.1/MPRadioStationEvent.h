@interface MPRadioStationEvent : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descriptionText;
- (void)setStartTime:;
- (void)setEndTime:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)initWithBlock:;
- (id)startTime;
- (id)endTime;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (void)setDescriptionText:;
+ (BOOL)supportsSecureCoding;
@end
