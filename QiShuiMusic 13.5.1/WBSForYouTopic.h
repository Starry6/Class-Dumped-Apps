@interface WBSForYouTopic : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray associatedTopics;
@property (nonatomic) NSDate relevancyDate;
@property (nonatomic) Q source;
- (id)identifier;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)source;
- (void)setSource:;
- (id)initWithTitle:identifier:relevancyDate:source:;
- (id)associatedTopics;
- (void)setAssociatedTopics:;
- (id)relevancyDate;
@end
