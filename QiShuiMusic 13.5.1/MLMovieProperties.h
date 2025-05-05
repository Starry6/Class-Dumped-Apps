@interface MLMovieProperties : NSObject
@property (nonatomic) NSArray castMembers;
@property (nonatomic) NSString copyrightWarning;
@property (nonatomic) NSArray directors;
@property (nonatomic) NSArray producers;
@property (nonatomic) NSArray screenwriters;
@property (nonatomic) NSString studioName;
- (void)_setValue:forKey:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)directors;
- (void)setDirectors:;
- (id)initWithMoviePropertiesDictionary:;
- (id)castMembers;
- (id)copyrightWarning;
- (id)producers;
- (id)screenwriters;
- (void)setCastMembers:;
- (void)setCopyrightWarning:;
- (void)setProducers:;
- (void)setScreenwriters:;
- (void)setStudioName:;
- (id)studioName;
- (id)copyMoviePropertiesDictionary;
- (void)_setValueCopy:forKey:;
@end
