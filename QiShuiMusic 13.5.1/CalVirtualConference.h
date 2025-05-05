@interface CalVirtualConference : NSObject
@property (nonatomic) Q source;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) NSArray joinMethods;
@property (nonatomic) NSString title;
@property (nonatomic) NSString conferenceDetails;
- (BOOL)isWritable;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)source;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTitle:joinMethods:conferenceDetails:source:isWritable:;
- (id)joinMethods;
- (id)conferenceDetails;
@end
